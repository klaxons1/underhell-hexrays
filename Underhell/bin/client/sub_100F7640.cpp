void __thiscall sub_100F7640(int this)
{
  __int16 v2; // ax
  double v3; // st7
  int (__thiscall *v4)(int, float *); // edx
  float v5[3]; // [esp+4h] [ebp-18h] BYREF
  float v6[2]; // [esp+10h] [ebp-Ch] BYREF
  float v7; // [esp+18h] [ebp-4h]

  v5[0] = 0.5;
  v5[1] = 0.5;
  v5[2] = 0.0;
  sub_1008E970(this + 352, v5, v6);
  *(_BYTE *)(this + 320) = 0;
  sub_1000E2A0((_BYTE *)this, 0);
  v2 = (**(int (__thiscall ***)(int, float *, _DWORD))dword_104131A0)(dword_104131A0, v6, 0);
  if ( (v2 & 0x4030) != 0 )
  {
    sub_1000E2A0((_BYTE *)this, v2);
    v3 = *(float *)(this + 384);
    *(_BYTE *)(this + 320) = 1;
    if ( 0.0 == v3
      || (v7 = *(float *)((*(int (__thiscall **)(int))(*(_DWORD *)this + 268))(this) + 8),
          ((**(int (__thiscall ***)(int, float *, _DWORD))dword_104131A0)(dword_104131A0, v6, 0) & 0x4030) != 0)
      && (v4 = *(int (__thiscall **)(int, float *))(*(_DWORD *)this + 532),
          *(_BYTE *)(this + 320) = 2,
          v7 = *(float *)(v4(this, v5) + 8),
          ((**(int (__thiscall ***)(int, float *, _DWORD))dword_104131A0)(dword_104131A0, v6, 0) & 0x4030) != 0) )
    {
      *(_BYTE *)(this + 320) = 3;
    }
  }
}
