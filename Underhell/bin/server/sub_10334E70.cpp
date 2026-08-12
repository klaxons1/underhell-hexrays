int __thiscall sub_10334E70(float *this, int a2, int a3, int a4)
{
  _BYTE *v5; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // [esp+4h] [ebp-4h] BYREF

  if ( a2 != 34 && a2 != 36 )
  {
    if ( a2 == 63 )
      this[687] = *(float *)(dword_106B31C8 + 12) + 1.0;
    goto LABEL_5;
  }
  v7 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
  if ( (unsigned __int8)sub_103960A0(v7) )
  {
LABEL_5:
    v5 = (_BYTE *)*((_DWORD *)this + 906);
    *((_BYTE *)this + 3648) = 1;
    v9 = 0;
    if ( v5 && sub_101645F0(v5, a2, a3, a4, &v9) )
      return v9;
    else
      return sub_10043EF0(this, a2, a3, a4);
  }
  if ( sub_100CF460(this)
    && (v8 = sub_100CF460(this), ((*(int (__thiscall **)(int))(*(_DWORD *)v8 + 1364))(v8) & 0x2000) != 0)
    && (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 1)
    && sub_10023D10(this, 10)
    && !sub_10023D10(this, 4) )
  {
    return (*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 1248))(this, 43);
  }
  else
  {
    return 47;
  }
}
