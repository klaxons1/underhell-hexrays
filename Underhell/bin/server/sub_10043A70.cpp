char __thiscall sub_10043A70(void *this, int a2, int a3)
{
  double v3; // st7
  int v4; // eax
  int v5; // eax
  double v6; // st7
  int v7; // eax
  int v9; // [esp-4h] [ebp-24h]
  float v10; // [esp+0h] [ebp-20h]
  int v11; // [esp+0h] [ebp-20h]
  float v12; // [esp+0h] [ebp-20h]
  float v13; // [esp+4h] [ebp-1Ch]
  float v14; // [esp+4h] [ebp-1Ch]
  float v15; // [esp+8h] [ebp-18h]
  float v16; // [esp+8h] [ebp-18h]
  int v17; // [esp+Ch] [ebp-14h]
  double v18; // [esp+18h] [ebp-8h]

  v3 = (double)*(int *)(a2 + 8);
  if ( v3 >= 120.0 )
    v3 = 120.0;
  v18 = v3;
  v13 = ((double (__thiscall *)(void *))*(_DWORD *)(*(_DWORD *)this + 1948))(this);
  v10 = v18;
  v4 = sub_1023CC80(a2, LODWORD(v10), LODWORD(v13));
  v5 = sub_1023CC80(a2, v4, v11);
  if ( (unsigned __int8)sub_100B3FD0(v5, v9, v12, v14, a3) )
    return 1;
  v6 = (double)*(int *)(a2 + 8);
  if ( v6 >= 60.0 )
    v6 = 60.0;
  v15 = v6;
  v7 = sub_1023CC80(a2, LODWORD(v15), a3);
  return sub_100B32C0(v7, v16, v17);
}
