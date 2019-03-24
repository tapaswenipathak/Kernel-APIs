Doubly Linked Lists
-------------------

Doubly linked list have following functions implemented :

`list_add` — add a new entry
`list_add_tail` — add a new entry
`__list_del_entry` — deletes entry from list.
`list_replace` — replace old entry by new one
`list_del_init` — deletes entry from list and reinitialize it.
`list_move` — delete from one list and add as another's head
`list_move_tail` — delete from one list and add as another's tail
`list_is_last` — tests whether list is the last entry in list head
list_empty — tests whether a list is empty
list_empty_careful — tests whether a list is empty and not being modified
list_rotate_left — rotate the list to the left
list_is_singular — tests whether a list has just one entry.
list_cut_position — cut a list into two
list_splice — join two lists, this is designed for stacks
list_splice_tail — join two lists, each list being a queue
list_splice_init — join two lists and reinitialise the emptied list.
list_splice_tail_init — join two lists and reinitialise the emptied list
list_entry — get the struct for this entry
list_first_entry — get the first element from a list
list_last_entry — get the last element from a list
list_first_entry_or_null — get the first element from a list
list_next_entry — get the next element in list
list_prev_entry — get the prev element in list
list_for_each — iterate over a list
list_for_each_prev — iterate over a list backwards
list_for_each_safe — iterate over a list safe against removal of list entry
list_for_each_prev_safe — iterate over a list backwards safe against removal of list entry
list_for_each_entry — iterate over list of given type
list_for_each_entry_reverse — iterate backwards over list of given type.
list_prepare_entry prepare a pos entry for use in list_for_each_entry_continue
list_for_each_entry_continue — continue iteration over list of given type
list_for_each_entry_continue_reverse — iterate backwards from the given point
list_for_each_entry_from — iterate over list of given type from the current point
list_for_each_entry_from_reverse — iterate backwards over list of given type from the current point
list_for_each_entry_safe — iterate over list of given type safe against removal of list entry
list_for_each_entry_safe_continue — continue list iteration safe against removal
list_for_each_entry_safe_from — iterate over list from current point safe against removal
list_for_each_entry_safe_reverse — iterate backwards over list safe against removal
list_safe_reset_next — reset a stale list_for_each_entry_safe loop
hlist_for_each_entry — iterate over list of given type
hlist_for_each_entry_continue — iterate over a hlist continuing after current point
hlist_for_each_entry_from — iterate over a hlist continuing from current point
hlist_for_each_entry_safe — iterate over list of given type safe against removal of list entry
