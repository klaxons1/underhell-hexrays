_DWORD *__thiscall sub_1003E0D0(int this, int a2)
{
  int v3; // esi
  int v4; // edi
  int v5; // eax
  _DWORD *result; // eax
  int v7; // esi
  float v8; // [esp+14h] [ebp-10h]
  int v9; // [esp+1Ch] [ebp-8h]
  int v10; // [esp+20h] [ebp-4h]

  v8 = sub_10036640((float *)this, a2);
  if ( *(int *)(this + 32) > 0 )
  {
    v10 = 0;
    v9 = *(_DWORD *)(this + 32);
    do
    {
      v3 = v10 + *(_DWORD *)(this + 20);
      v4 = *(_DWORD *)(v3 + 8);
      v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 28))(v4);
      if ( (v5 & a2) != 0
        && (v5 & 4) == 0
        && (*(unsigned __int8 (__thiscall **)(int, float, bool))(*(_DWORD *)v4 + 16))(
             v4,
             COERCE_FLOAT(LODWORD(v8)),
             (a2 & 0x20) == 0) )
      {
        *(_WORD *)(v3 + 2) = 1;
      }
      v10 += 12;
      --v9;
    }
    while ( v9 );
  }
  result = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 552))(this);
  if ( (_BYTE)result && *(_WORD *)(this + 1172) == 0xFFFF )
  {
    v7 = (unsigned __int16)sub_100EC160(0);
    sub_1016F8E0(0xFFFF, v7);
    result = (_DWORD *)(dword_103D8A7C + 8 * v7);
    if ( result )
      *result = this;
    *(_WORD *)(this + 1172) = v7;
  }
  return result;
}
