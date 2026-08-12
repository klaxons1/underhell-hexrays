int __cdecl sub_101163A0(int a1)
{
  int v1; // eax
  char v2; // cl
  int v3; // eax
  void (__thiscall *v4)(int, int (*)()); // edx
  char Buffer[256]; // [esp+4h] [ebp-100h] BYREF

  if ( !dword_10437540[a1] )
  {
    if ( a1 )
    {
      sprintf(Buffer, "_rt_FullFrameFB%d", a1);
    }
    else
    {
      v1 = 0;
      do
      {
        v2 = aRtFullframefb[v1];
        Buffer[v1++] = v2;
      }
      while ( v2 );
    }
    v3 = (*(int (__thiscall **)(int, char *, const char *, int))(*(_DWORD *)dword_1047C96C + 304))(
           dword_1047C96C,
           Buffer,
           "RenderTargets",
           1);
    sub_10233410(v3);
    if ( !byte_10437518 )
    {
      v4 = *(void (__thiscall **)(int, int (*)()))(*(_DWORD *)dword_1047C96C + 172);
      byte_10437518 = 1;
      v4(dword_1047C96C, sub_101161A0);
    }
  }
  return dword_10437540[a1];
}
