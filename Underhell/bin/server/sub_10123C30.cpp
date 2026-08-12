int __cdecl sub_10123C30(const char *ArgList, char a2)
{
  HWND WindowA; // eax
  CHAR Text[1024]; // [esp+0h] [ebp-40Ch] BYREF
  LPARAM lParam[3]; // [esp+400h] [ebp-Ch] BYREF

  WindowA = FindWindowA("Worldcraft_ShellMessageWnd", "Worldcraft_ShellMessageWnd");
  if ( WindowA )
  {
    lParam[1] = strlen(ArgList) + 1;
    lParam[0] = 0;
    lParam[2] = (LPARAM)ArgList;
    if ( SendMessageA(WindowA, 0x4Au, 0, (LPARAM)lParam) )
    {
      return 0;
    }
    else
    {
      if ( a2 )
      {
        sub_10429A00(
          Text,
          0x400u,
          "Worldcraft did not accept the command: \n"
          "\n"
          "\"%s\"\n"
          "\n"
          " Make sure the command is valid and that Worldcraft is still running properly.",
          (char)ArgList);
        MessageBoxA(0, Text, "Editor_SendCommand Error", 0);
      }
      return 2;
    }
  }
  else
  {
    if ( a2 )
    {
      sub_10429A00(
        Text,
        0x400u,
        "Could not contact Worldcraft to send the command: \n\n\"%s\"\n\n Worldcraft does not appear to be running.",
        (char)ArgList);
      MessageBoxA(0, Text, "Editor_SendCommand Error", 0);
    }
    return 1;
  }
}
