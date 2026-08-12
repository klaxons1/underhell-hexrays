void __thiscall sub_100E28F0(unsigned __int8 *this, int a2)
{
  char **v3; // ecx
  char *v4; // eax

  v3 = (char **)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) == 2 )
  {
    v4 = *v3;
    if ( !*v3 )
    {
      sub_100E2700(this, "SetParentAttachmentMaintainOffset", (char *)String, 1);
      return;
    }
  }
  else
  {
    v4 = (char *)sub_1010D460(v3);
  }
  sub_100E2700(this, "SetParentAttachmentMaintainOffset", v4, 1);
}
