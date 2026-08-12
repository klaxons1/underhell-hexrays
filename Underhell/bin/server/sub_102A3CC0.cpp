char __thiscall sub_102A3CC0(float *this, char a2)
{
  unsigned int v3; // ecx
  int *v4; // eax
  unsigned int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax

  if ( *(float *)(dword_106B31C8 + 12) < (double)this[34] )
    return 0;
  v3 = *((_DWORD *)this + 54);
  if ( v3 != -1 )
  {
    v4 = &off_1061BE18[4 * ((_DWORD)this[54] & 0xFFF) + 1];
    v5 = v3 >> 12;
    if ( off_1061BE18[4 * ((_DWORD)this[54] & 0xFFF) + 2] == v5 )
    {
      if ( *v4 )
      {
        v6 = off_1061BE18[4 * ((_DWORD)this[54] & 0xFFF) + 2] == v5 ? *v4 : 0;
        if ( (unsigned __int8)sub_10395C40(v6) )
          return 0;
      }
    }
  }
  v7 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 52))(this);
  v8 = sub_1007DB30((_DWORD *)(v7 + 52), 100005);
  if ( sub_10023D10(*((_DWORD **)this + 1), v8) )
    return 0;
  v9 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 52))(this);
  v10 = sub_1007DB30((_DWORD *)(v9 + 52), 100000);
  if ( sub_10023D10(*((_DWORD **)this + 1), v10) || (unsigned __int8)sub_1004B510(this, 100014, 1) )
    return 0;
  if ( a2 )
  {
    if ( (unsigned __int8)sub_1004B510(this, 100016, 1) || (unsigned __int8)sub_1004B510(this, 100017, 1) )
      return 0;
  }
  else if ( sub_100C4E90(*((_DWORD **)this + 1), dword_106DB614) || sub_100C4E90(*((_DWORD **)this + 1), dword_106DB60C) )
  {
    return 0;
  }
  return 1;
}
