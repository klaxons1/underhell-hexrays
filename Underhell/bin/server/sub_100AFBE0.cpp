int __thiscall sub_100AFBE0(void *this, int *a2, int a3)
{
  int v4; // ecx
  bool v5; // zf
  int v6; // eax
  int v7; // esi
  int *v8; // edi
  int v10; // [esp+4h] [ebp-Ch] BYREF
  float v11; // [esp+8h] [ebp-8h] BYREF
  int *v12; // [esp+Ch] [ebp-4h]

  v11 = -1.0;
  v4 = *a2;
  v12 = 0;
  v10 = v4;
  if ( &v11 != (float *)a3 )
  {
    v5 = *(_DWORD *)(a3 + 4) == 0;
    v11 = *(float *)a3;
    v12 = 0;
    if ( !v5 )
    {
      v6 = sub_10184390(168);
      if ( v6 )
        v12 = (int *)sub_100657C0(v6, *(_DWORD *)(a3 + 4));
      else
        v12 = 0;
    }
  }
  v7 = sub_100AFB10((int)this, (int)&v10);
  if ( v12 )
  {
    v8 = v12;
    sub_10068150(v12);
    sub_10184660(v8);
  }
  return v7;
}
