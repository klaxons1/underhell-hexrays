void __thiscall sub_10046930(int this)
{
  unsigned int v2; // eax
  _DWORD *v3; // ecx
  unsigned int v4; // esi
  unsigned int v5; // eax
  int v6; // edx
  int v7; // ecx
  int v8; // esi
  float *v9; // esi
  int v10; // [esp+Ch] [ebp-4h]

  v2 = *(_DWORD *)(this + 3788);
  if ( v2 != -1
    && (v3 = (_DWORD *)((char *)off_103DCD74 + 16 * (*(_DWORD *)(this + 3788) & 0xFFF) + 4),
        v4 = v2 >> 12,
        *((_DWORD *)off_103DCD74 + 4 * (v2 & 0xFFF) + 2) == v2 >> 12)
    && *v3 )
  {
    if ( -1.0 == *(float *)(this + 3792) )
    {
      v10 = v3[1] == v4 ? *v3 : 0;
      v5 = *(_DWORD *)(this + 3424);
      if ( v5 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 3424) & 0xFFF) + 2) != v5 >> 12 )
        v6 = 0;
      else
        v6 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 3424) & 0xFFF) + 1);
      if ( v6 == v10 )
      {
        v7 = v3[1] == v4 ? *v3 : 0;
        v8 = v7 + 1192;
        if ( sub_10012AA0(this + 3356, v7 + 1192) )
        {
          sub_10046400((float *)(this + 3356), v8);
          sub_10046170(this);
          return;
        }
      }
    }
  }
  else
  {
    v9 = (float *)(this + 3396);
    if ( -1.0 != *(float *)(this + 3396) || *(_BYTE *)(this + 3420) )
    {
      if ( *(_DWORD *)v9 != COERCE_INT(-1.0) )
      {
        (**(void (__thiscall ***)(int, int))(this + 3356))(this + 3356, this + 3396);
        *v9 = -1.0;
      }
      if ( *(_BYTE *)(this + 3420) )
      {
        (**(void (__thiscall ***)(int, int))(this + 3356))(this + 3356, this + 3420);
        *(_BYTE *)(this + 3420) = 0;
        sub_10046170(this);
        return;
      }
    }
  }
  sub_10046170(this);
}
