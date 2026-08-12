int __thiscall sub_100A4FA0(_DWORD *this)
{
  _DWORD *v1; // esi
  int result; // eax
  int v3; // edi
  int v4; // ebx
  _DWORD *v6; // [esp+Ch] [ebp-4h]

  v1 = this;
  sub_100A44F0(this + 1);
  sub_100A3FC0(v1 + 8);
  sub_100A4010(v1 + 15);
  sub_100A2160(v1 + 22);
  result = (*(int (__thiscall **)(_DWORD *))(v1[336] + 4))(v1 + 336);
  v3 = v1[344] - 1;
  if ( v3 >= 0 )
  {
    v4 = 24 * v3;
    do
    {
      v6 = *(_DWORD **)(v1[340] + v4 + 20);
      if ( *((_BYTE *)v1 + 1322) )
      {
        (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(v1[340] + v4 + 16));
        sub_100A0AC0(v1 + 339, v3);
        result = v1[340];
        *(_DWORD *)(v4 + result) = v3;
        *(_DWORD *)(v1[340] + v4 + 4) = v1[345];
        --v1[344];
        v1[345] = v3;
        v1 = this;
      }
      else
      {
        sub_100A44F0((_DWORD *)(*(_DWORD *)(v1[340] + v4 + 20) + 4));
        sub_100A3FC0(v6 + 8);
        sub_100A4010(v6 + 15);
        sub_100A2160(v6 + 22);
        result = (*(int (__thiscall **)(_DWORD *))(*v6 + 32))(v6);
      }
      v4 -= 24;
      --v3;
    }
    while ( v3 >= 0 );
  }
  return result;
}
