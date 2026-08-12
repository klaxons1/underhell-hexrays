int __thiscall sub_100FC770(int this, int a2)
{
  int v3; // edi
  int result; // eax
  int v5; // esi

  v3 = sub_100FBC20((int *)this, *(_DWORD *)(this + 12));
  result = *(_DWORD *)this + 56 * v3;
  *(_DWORD *)result = *(_DWORD *)a2;
  *(_DWORD *)(result + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(result + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(result + 16) = *(_DWORD *)(a2 + 16);
  *(float *)(result + 20) = *(float *)(a2 + 20);
  *(float *)(result + 24) = *(float *)(a2 + 24);
  *(float *)(result + 28) = *(float *)(a2 + 28);
  *(float *)(result + 32) = *(float *)(a2 + 32);
  *(float *)(result + 36) = *(float *)(a2 + 36);
  *(float *)(result + 40) = *(float *)(a2 + 40);
  *(_DWORD *)(result + 44) = *(_DWORD *)(a2 + 44);
  *(_DWORD *)(result + 48) = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(result + 52) = *(_DWORD *)(a2 + 52);
  if ( v3 )
  {
    do
    {
      v5 = (v3 + 1) / 2 - 1;
      result = (*(int (__cdecl **)(int, int))(this + 20))(*(_DWORD *)this + 56 * v3, *(_DWORD *)this + 56 * v5);
      if ( (_BYTE)result )
        break;
      result = sub_100FC460((int *)this, (v3 + 1) / 2 - 1, v3);
      v3 = (v3 + 1) / 2 - 1;
    }
    while ( v5 );
  }
  return result;
}
