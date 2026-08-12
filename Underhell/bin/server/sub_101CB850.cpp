int __thiscall sub_101CB850(int this)
{
  int v2; // ebx
  int v3; // eax
  int v4; // edi
  const char *v5; // eax
  int (__thiscall *v6)(int, int *); // edx
  int v8; // [esp+Ch] [ebp-1Ch] BYREF
  int v9; // [esp+10h] [ebp-18h]
  int v10; // [esp+14h] [ebp-14h]
  int v11; // [esp+18h] [ebp-10h] BYREF
  int v12; // [esp+1Ch] [ebp-Ch]
  int v13; // [esp+20h] [ebp-8h]
  _BYTE v14[4]; // [esp+24h] [ebp-4h] BYREF

  if ( *(_BYTE *)(this + 4420) )
    sub_101FB2A0(this);
  v2 = sub_100BF520(this, "helmet");
  v3 = sub_100BF4B0(this, v2);
  v4 = v3;
  if ( v3 > 0 && v3 <= 3 )
  {
    sub_100BEFA0((void *)this, "Eyes", (int)&v8, (int)&v11);
    v5 = *(const char **)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 28))(this, v14);
    if ( !v5 )
      v5 = String;
    if ( !_stricmp(v5, "models/combine_soldier_prisonguard.mdl") )
    {
      sub_101CB6F0(this, (int)"item_helmet_prison", *(float *)&v8, v9, v10, *(float *)&v11, v12, v13, 1, v4);
    }
    else if ( *(_DWORD *)(this + 4396) == 10 )
    {
      sub_101CB6F0(this, (int)"item_helmet_pmc", *(float *)&v8, v9, v10, *(float *)&v11, v12, v13, 1, v4);
    }
    else
    {
      sub_101CB6F0(this, (int)"item_helmet_guard", *(float *)&v8, v9, v10, *(float *)&v11, v12, v13, 1, v4);
    }
    sub_100C1600(this, v2, 0);
  }
  v6 = *(int (__thiscall **)(int, int *))(*(_DWORD *)this + 752);
  *(float *)&v8 = 0.0;
  *(float *)&v9 = 0.0;
  *(float *)&v10 = 0.0;
  return v6(this, &v8);
}
