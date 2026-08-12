void __thiscall sub_10194B90(int this, int a2)
{
  double v3; // st7
  void (__noreturn ***v4)(); // eax
  double v5; // st7
  void (__noreturn ***v6)(); // eax
  float v7; // [esp+Ch] [ebp-Ch]
  float v8; // [esp+Ch] [ebp-Ch]
  float v9; // [esp+20h] [ebp+8h]
  float v10; // [esp+20h] [ebp+8h]

  sub_10024A70(this, a2);
  if ( *(int *)(this + 3388) < 0 || *(int *)(this + 3392) < 0 )
  {
    sub_10194890((_DWORD *)(this - 8));
  }
  else
  {
    sub_10194980((_DWORD *)(this - 8));
    if ( *(_DWORD *)(this + 3376) && *(_DWORD *)(this + 3380) )
    {
      if ( *((float *)off_103DC81C + 3) > (double)*(float *)(this + 3396) )
        v3 = 0.0;
      else
        v3 = *(float *)(this + 3396) - *((float *)off_103DC81C + 3);
      v9 = v3;
      v4 = sub_101218C0();
      v7 = (float)*(int *)(this + 3388);
      ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v4)[11])(
        v4,
        *(_DWORD *)(this + 3376),
        LODWORD(v7),
        LODWORD(v9));
      if ( *((float *)off_103DC81C + 3) > (double)*(float *)(this + 3400) )
        v5 = 0.0;
      else
        v5 = *(float *)(this + 3400) - *((float *)off_103DC81C + 3);
      v10 = v5;
      v6 = sub_101218C0();
      v8 = (float)*(int *)(this + 3392);
      ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v6)[11])(
        v6,
        *(_DWORD *)(this + 3380),
        LODWORD(v8),
        LODWORD(v10));
    }
  }
}
