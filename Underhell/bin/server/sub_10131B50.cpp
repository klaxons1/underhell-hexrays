_DWORD *__thiscall sub_10131B50(_DWORD *this)
{
  int v2; // edx
  int (__thiscall *v3)(_DWORD *); // edx
  int v4; // edi
  int v5; // eax
  int v6; // esi
  int v7; // ecx
  int v8; // eax
  _DWORD *result; // eax

  sub_10112C00((int)(this + 80), 0);
  sub_100E0970((int)this, v2, 0, 0);
  v3 = *(int (__thiscall **)(_DWORD *))(*this + 8);
  this[201] = 0;
  *((_BYTE *)this + 808) = 0;
  v4 = *(_DWORD *)v3(this);
  v5 = dword_106AF128;
  v6 = dword_106AF128;
  if ( dword_106AF128 + 1 > dword_106AF120 )
  {
    sub_102ABFC0(dword_106AF128 - dword_106AF120 + 1);
    v5 = dword_106AF128;
  }
  v7 = dword_106AF11C;
  dword_106AF128 = v5 + 1;
  v8 = v5 - v6;
  dword_106AF12C = dword_106AF11C;
  if ( v8 > 0 )
  {
    memcpy((void *)(dword_106AF11C + 4 * v6 + 4), (const void *)(dword_106AF11C + 4 * v6), 4 * v8);
    v7 = dword_106AF11C;
  }
  result = (_DWORD *)(v7 + 4 * v6);
  if ( result )
    *result = v4;
  return result;
}
