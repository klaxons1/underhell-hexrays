unsigned int sub_10426490()
{
  int i; // ebp
  int v1; // esi
  int v2; // ebx
  unsigned int v3; // eax
  int v4; // ecx
  _DWORD *j; // edx
  int v6; // edi
  unsigned int v7; // eax
  int v8; // ecx
  _DWORD *k; // edx
  int v10; // edi
  unsigned int v11; // eax
  int v12; // ecx
  _DWORD *m; // edx
  int v14; // edi
  unsigned int result; // eax
  int v16; // edx
  _DWORD *n; // ecx

  for ( i = 0; i < 1024; ++i )
  {
    v1 = i & 1 | (i >> 8) & 2;
    v2 = (unsigned __int8)(i >> 1);
    v3 = sub_10426400(v2 ^ dword_105C7578[v1], dword_105C7538[v1]) << 24;
    v4 = 0;
    for ( j = &unk_105C75B8; v3; v3 >>= 1 )
    {
      if ( (v3 & 1) != 0 )
        v4 |= *j;
      ++j;
    }
    v6 = dword_105C7548[v1];
    dword_106F99F0[i] = v4;
    v7 = sub_10426400(v2 ^ dword_105C7588[v1], v6) << 16;
    v8 = 0;
    for ( k = &unk_105C75B8; v7; v7 >>= 1 )
    {
      if ( (v7 & 1) != 0 )
        v8 |= *k;
      ++k;
    }
    v10 = dword_105C7558[v1];
    dword_106FA9F0[i] = v8;
    v11 = sub_10426400(v2 ^ dword_105C7598[v1], v10) << 8;
    v12 = 0;
    for ( m = &unk_105C75B8; v11; v11 >>= 1 )
    {
      if ( (v11 & 1) != 0 )
        v12 |= *m;
      ++m;
    }
    v14 = dword_105C7568[v1];
    dword_106FB9F0[i] = v12;
    result = sub_10426400(v2 ^ dword_105C75A8[v1], v14);
    v16 = 0;
    for ( n = &unk_105C75B8; result; result >>= 1 )
    {
      if ( (result & 1) != 0 )
        v16 |= *n;
      ++n;
    }
    dword_106FC9F0[i] = v16;
  }
  return result;
}
