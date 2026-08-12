int __thiscall sub_10281F50(int (__thiscall ***this)(_DWORD))
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  char v5[1016]; // [esp+10h] [ebp-3F8h] BYREF

  strcpy(
    v5,
    "In the Build Mode Dialog Window:\n"
    "Delete button - deletes the currently selected panel if it is deletable.\n"
    "Apply button - applies changes to the Context Panel.\n"
    "Save button - saves all settings to file. \n"
    "Revert to saved- reloads the last saved file.\n"
    "Auto Update - any changes apply instantly.\n"
    "Typing Enter in any text field applies changes.\n"
    "New Control menu - creates a new panel in the upper left corner.\n"
    "\n"
    "In the Context Panel:\n"
    "After selecting and moving a panel Ctrl-z will undo the move.\n"
    "Shift clicking panels allows multiple panels to be selected into a group.\n"
    "Ctrl-c copies the settings of the last selected panel.\n"
    "Ctrl-v creates a new panel with the copied settings at the location of the mouse pointer.\n"
    "Arrow keys slowly move panels, holding shift + arrow will slowly resize it.\n"
    "Holding right mouse button down opens a dropdown panel creation menu.\n"
    "  Panel will be created where the menu was opened.\n"
    "Delete key deletes the currently selected panel if it is deletable.\n"
    "  Does nothing to multiple selections.");
  v2 = (_DWORD *)sub_100DDA40(464);
  if ( v2 )
    v3 = sub_10270680(v2, "Build Mode Help", v5, this);
  else
    v3 = 0;
  (*(void (__thiscall **)(_DWORD *, int (__thiscall ***)(_DWORD)))(*v3 + 172))(v3, this);
  return (*(int (__thiscall **)(_DWORD *, _DWORD))(*v3 + 1028))(v3, 0);
}
