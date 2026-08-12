int __thiscall sub_102F7EB0(_DWORD *this)
{
  float *v3; // edi
  _DWORD *v4; // eax
  float *v5; // eax
  float v6[3]; // [esp+4h] [ebp-18h] BYREF
  float v7; // [esp+10h] [ebp-Ch] BYREF
  float v8; // [esp+14h] [ebp-8h]
  float v9; // [esp+18h] [ebp-4h]

  if ( *((_BYTE *)this + 5864) )
    return (*(int (__thiscall **)(_DWORD *))(this[1460] + 116))(this + 1460);
  if ( *((_BYTE *)this + 5412) )
    return (*(int (__thiscall **)(_DWORD *))(this[1328] + 116))(this + 1328);
  if ( !(*(int (__thiscall **)(_DWORD *))(*this + 368))(this) && sub_103942C0(this) == -1 )
  {
    if ( (unsigned __int8)sub_103E0CF0(0) )
    {
      v3 = (float *)(*(int (__thiscall **)(_DWORD *, float *))(*this + 968))(this, v6);
      v4 = (_DWORD *)sub_1026A890(this + 1424);
      v5 = (float *)sub_10019640(v4);
      v7 = *v5 - *v3;
      v8 = v5[1] - v3[1];
      v9 = v5[2] - v3[2];
      if ( off_10689714() > 80.0 )
      {
        (*(void (__thiscall **)(_DWORD *, float *, _DWORD, _DWORD))(*this + 528))(this, v6, 0, 0);
        if ( v7 * v6[0] + v6[1] * v8 + v6[2] * v9 > 0.0 )
          return (*(int (__thiscall **)(_DWORD *, float *))(*this + 1836))(this, &v7);
      }
    }
  }
  return sub_10399B50(this);
}
