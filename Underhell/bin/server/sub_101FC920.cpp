char __thiscall sub_101FC920(int (__stdcall ***this)(int), int a2, char *a3)
{
  int v4; // eax
  int i; // edi
  char result; // al
  char *v8; // esi
  _BYTE v9[32]; // [esp+Ch] [ebp-2Ch] BYREF
  _BYTE v10[12]; // [esp+2Ch] [ebp-Ch] BYREF
  int v11; // [esp+40h] [ebp+8h]

  (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)a2 + 504))(a2, v10);
  v4 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)dword_106B31D0 + 256))(dword_106B31D0, v10);
  (*(void (__thiscall **)(int, int, _BYTE *, int))(*(_DWORD *)dword_106B31D0 + 260))(dword_106B31D0, v4, v9, 32);
  for ( i = 0; i < 32; ++i )
  {
    result = *((_BYTE *)this + i + 4);
    if ( v9[i] != result )
    {
      result = (**this)((int)this + i + 4);
      *((_BYTE *)this + i + 4) = v9[i];
    }
  }
  v8 = (char *)(this + 9);
  v11 = 24;
  do
  {
    if ( *a3 != *v8 )
    {
      ((void (__thiscall *)(int (__stdcall ***)(int), char *))**this)(this, v8);
      result = *a3;
      *v8 = *a3;
    }
    ++a3;
    ++v8;
    --v11;
  }
  while ( v11 );
  return result;
}
