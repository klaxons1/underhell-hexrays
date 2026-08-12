int __thiscall sub_1005C510(char *this)
{
  float *v2; // esi
  int v3; // edi
  int result; // eax
  int v5; // [esp+1Ch] [ebp-4h]

  sub_101422C0();
  (*(void (__thiscall **)(char *))(*(_DWORD *)this + 36))(this);
  off_103EDFEC();
  v2 = (float *)(this + 1352);
  v3 = 6;
  do
  {
    if ( v2[287] > 0.0 )
    {
      LOWORD(v5) = -1;
      BYTE2(v5) = -1;
      HIBYTE(v5) = *((_BYTE *)v2 + 3);
      if ( *(_DWORD *)v2 != v5 )
        *(_DWORD *)v2 = v5;
      sub_10123ED0(255, 0.0);
    }
    result = sub_10037B80(v2 - 22);
    v2 += 326;
    --v3;
  }
  while ( v3 );
  return result;
}
