void __thiscall sub_10097050(float *this, _BYTE *a2, int a3)
{
  float *v4; // ecx
  float v5; // [esp+0h] [ebp-Ch]

  v4 = (float *)dword_10693788;
  if ( !dword_10693788 )
  {
    sub_101811E0("ai_ally_speech_manager", -1);
    v4 = (float *)dword_10693788;
    if ( dword_10693788 )
    {
      sub_10260750(dword_10693788);
      v4 = (float *)dword_10693788;
    }
  }
  sub_100964A0(v4, this - 913, a2, a3);
  if ( a3 )
  {
    if ( *(char *)(a3 + 150) < 0 )
    {
      v5 = sub_100658C0(a3) + *(float *)(dword_106B31C8 + 12);
      sub_100B8D50(v5);
    }
  }
}
