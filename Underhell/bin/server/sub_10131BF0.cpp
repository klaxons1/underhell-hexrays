int *__thiscall sub_10131BF0(void *this)
{
  int v2; // edi
  int v3; // eax
  int v4; // esi
  int v5; // ecx
  int v6; // eax
  int *result; // eax

  sub_100E0780((int)this);
  if ( this )
    v2 = *(_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 8))(this);
  else
    v2 = -1;
  v3 = dword_106AF128;
  v4 = dword_106AF128;
  if ( dword_106AF128 + 1 > dword_106AF120 )
  {
    sub_102ABFC0(dword_106AF128 - dword_106AF120 + 1);
    v3 = dword_106AF128;
  }
  v5 = dword_106AF11C;
  dword_106AF128 = v3 + 1;
  v6 = v3 - v4;
  dword_106AF12C = dword_106AF11C;
  if ( v6 > 0 )
  {
    memcpy((void *)(dword_106AF11C + 4 * v4 + 4), (const void *)(dword_106AF11C + 4 * v4), 4 * v6);
    v5 = dword_106AF11C;
  }
  result = (int *)(v5 + 4 * v4);
  if ( result )
    *result = v2;
  return result;
}
