void __thiscall sub_101273E0(int this)
{
  const char *v2; // eax
  int *v3; // ecx
  float v4; // [esp+8h] [ebp-10h]
  _BYTE v5[4]; // [esp+14h] [ebp-4h] BYREF

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  v2 = *(const char **)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 28))(this, v5);
  if ( !v2 )
    v2 = String;
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, v2);
  if ( *(_BYTE *)(this + 119) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 116);
    }
    *(_BYTE *)(this + 119) = 0;
  }
  sub_10112C00(this + 320, 0);
  if ( (*(_BYTE *)(this + 248) & 1) != 0 )
  {
    *(_DWORD *)(this + 812) = 0;
  }
  else
  {
    sub_100EC3F0((_DWORD *)this, (int)sub_10124720, 0.0, 0);
    v4 = *(float *)(dword_106B31C8 + 12) + 2.0;
    sub_100EC4A0((int *)this, v4, 0);
    *(_DWORD *)(this + 812) = 1;
  }
}
