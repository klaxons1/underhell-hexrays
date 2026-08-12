int __thiscall sub_100B9730(void *this, int a2)
{
  int v3; // esi
  int v4; // eax
  _DWORD *v5; // ecx
  void (__stdcall *v6)(int); // edx

  if ( (_BYTE)a2 == 1 )
  {
    v3 = 0;
    if ( ((int (*)(void))sub_10237130)() > 0 )
    {
      do
      {
        v4 = sub_10237150(v3);
        v5 = (_DWORD *)__RTDynamicCast(
                         v4,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&vgui::Panel `RTTI Type Descriptor',
                         (int)&CHudChatFilterCheckButton `RTTI Type Descriptor',
                         0);
        if ( v5 )
        {
          v6 = *(void (__stdcall **)(int))(*v5 + 928);
          if ( (*(_DWORD *)(dword_10430054 + 48) & v5[100]) != 0 )
            v6(1);
          else
            v6(0);
        }
        ++v3;
      }
      while ( v3 < sub_10237130(this) );
    }
  }
  return sub_10236310(a2);
}
