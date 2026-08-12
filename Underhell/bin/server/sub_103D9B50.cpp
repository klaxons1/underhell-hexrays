unsigned __int8 __thiscall sub_103D9B50(int this)
{
  unsigned int v2; // eax
  double v3; // st7
  int v4; // edi
  int v5; // eax
  int v6; // eax
  unsigned __int8 result; // al
  int v8; // [esp-4h] [ebp-10h]
  float v9; // [esp+0h] [ebp-Ch]
  int v10; // [esp+4h] [ebp-8h]

  sub_10041D00((_DWORD *)this);
  v2 = *(_DWORD *)(this + 3660);
  if ( v2 != -1
    && off_1061BE18[4 * (*(_DWORD *)(this + 3660) & 0xFFF) + 2] == v2 >> 12
    && off_1061BE18[4 * (*(_DWORD *)(this + 3660) & 0xFFF) + 1] )
  {
    if ( *(_BYTE *)(this + 3788) || !sub_10023D10((_DWORD *)this, 21) && !sub_10023D10((_DWORD *)this, 79) )
      sub_10023CB0((char *)this, 78);
  }
  else
  {
    sub_10023E00((char *)this, 78);
  }
  if ( *(_DWORD *)(this + 3712) )
    v3 = *(float *)(dword_106B31C8 + 12) + 0.03;
  else
    v3 = *(float *)(dword_106B31C8 + 12) + 0.1;
  v9 = v3;
  sub_100EC4A0((int *)this, v9, 0);
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
  {
    v4 = dword_106B31C8;
    v8 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 1868))(this);
    if ( *(float *)(v4 + 12) - sub_10077680(v5, v8, 1) > 30.0 )
    {
      v10 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 1868))(this);
      sub_100780E0(v6, v10);
      sub_100285C0((_DWORD *)this, 0, 1);
    }
  }
  result = sub_10023D10((_DWORD *)this, 50);
  if ( result )
    return (unsigned __int8)sub_10023CB0((char *)this, 74);
  return result;
}
