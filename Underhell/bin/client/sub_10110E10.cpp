char __thiscall sub_10110E10(unsigned __int16 *this, float a2, float a3, char a4)
{
  char v5; // bl
  int v6; // ecx
  int v7; // edx
  unsigned int v8; // eax
  _BYTE *v9; // ecx
  _BYTE *v10; // edi
  float v12; // [esp+8h] [ebp-Ch]

  v5 = 1;
  if ( this[8] )
  {
    v6 = this[7];
    v7 = this[6];
    v8 = 12 * *((unsigned __int8 *)this + 29);
    if ( v6 >= v7 )
      v6 -= v7;
    v9 = *(_BYTE **)(*((_DWORD *)this + 2) + 12 * v6 + 8);
    v10 = (_BYTE *)*((_DWORD *)this + 1);
    if ( v8 < 4 )
    {
LABEL_7:
      if ( !v8 || *v9 == *v10 && (v8 <= 1 || v9[1] == v10[1] && (v8 <= 2 || v9[2] == v10[2])) )
        v5 = 0;
    }
    else
    {
      while ( *(_DWORD *)v10 == *(_DWORD *)v9 )
      {
        v8 -= 4;
        v9 += 4;
        v10 += 4;
        if ( v8 < 4 )
          goto LABEL_7;
      }
    }
  }
  sub_1010FF20((int)this, a2, *((void **)this + 1), 1);
  if ( a4 )
    (*(void (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 12))(this);
  v12 = *((float *)off_103DC81C + 3) - a3 - 0.050000001;
  sub_1002BF90((int)this, v12);
  return v5;
}
