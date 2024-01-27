using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Act;

public class ActionList
{
    List<Action> list;



    public ActionList() 
    {
        // Initialize the list
        list = new List<Action>();
    }

    /// <summary>
    /// Add an additional action to the list
    /// </summary>
    /// <param name="action">The action being added</param>
    public void Add(Action action)
    {
        list.Add(action);
    }

    /// <summary>
    /// Updates all of the actions in the list
    /// </summary>
    /// <param name="deltaTime">The time step to update each action.</param>
    public void Update(float deltaTime)
    {
        // Initialize the blockflags as zero
        int blockFlags = 0;

        // Iterate through the list
        for(int i=0; i <list.Count; i++) 
        {
            // Check if blocked
            if(IsBlocked(blockFlags, list[i]))
            {
                continue;
            }

            // Check if the list is complete
            if(list[i].Update(deltaTime))
            {
                // Clean up the loop
                list.RemoveAt(i);
                --i;
                continue;
            }

            // Otherwise check if it is blocked
            if (list[i].IsBlocking)
            {
                // Update blocking
                UpdateBlocking(list[i].ActionGroup, ref blockFlags);
            }
        }
    }

    /// <summary>
    /// Checks if the given action is blocked
    /// </summary>
    /// <param name="blockFlags">The flags which are currently being blocked</param>
    /// <param name="action">The action being check for being blocked</param>
    /// <returns>If the action is blocked, returns true. Otherwise, returns false.</returns>
    public bool IsBlocked(int blockFlags, Action action)
    {
        // Compare the block flags
        return action.CompareGroup(blockFlags);
    }

    /// <summary>
    /// Update the blocking of the objects
    /// </summary>
    /// <param name="group"></param>
    /// <param name="blockFlags"></param>
    public void UpdateBlocking(Action.Group group, ref int blockFlags)
    {
        // If the action is blocking all
        if(group == Action.Group.All)
        {
            // Maximize the block flags
            blockFlags = int.MaxValue;
        }
        else
        {
            // Append the block flags
            blockFlags |= (1 << (int)group);
        }
    }

    /// <summary>
    /// Clear all of the actions on the list.
    /// </summary>
    public void Clear()
    {
        // Update all of the list
        for(int i=0; i<list.Count; i++)
        {
            // Cancel each of the actions
            list[i].Cancel();
        }
        // Remove all of the actions
        list.Clear();
    }

}
