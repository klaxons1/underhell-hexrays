int sub_1012DC80()
{
  int v0; // edi
  int v1; // esi
  int result; // eax
  _DWORD v3[4096]; // [esp+Ch] [ebp-4024h] BYREF
  int v4[2]; // [esp+400Ch] [ebp-24h] BYREF
  int v5; // [esp+4014h] [ebp-1Ch]
  int v6; // [esp+4018h] [ebp-18h]
  int v7; // [esp+401Ch] [ebp-14h]
  int v8; // [esp+4020h] [ebp-10h]
  char v9; // [esp+4024h] [ebp-Ch]
  int i; // [esp+4028h] [ebp-8h]
  int v11; // [esp+402Ch] [ebp-4h] BYREF

  v0 = sub_1012C970(&off_1061BE40, (int)v3, 4096);
  v1 = 0;
  v4[0] = 0;
  v4[1] = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  for ( i = 0; v1 < v0; ++v1 )
  {
    if ( v3[v1] )
    {
      v11 = v3[v1];
      sub_1012D160(v4, &v11);
    }
  }
  result = sub_1012CCE0(v4);
  if ( v5 >= 0 )
  {
    result = v4[0];
    if ( v4[0] )
      return (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v4[0]);
  }
  return result;
}
