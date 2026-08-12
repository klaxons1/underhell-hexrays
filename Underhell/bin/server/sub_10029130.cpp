int __thiscall sub_10029130(int *this, int a2)
{
  double v4; // st7
  int v5; // eax
  int (__thiscall *v6)(int *, _BYTE *, float *, char *); // edx
  char v7[68]; // [esp+4h] [ebp-A4h] BYREF
  int v8; // [esp+48h] [ebp-60h]
  int v9; // [esp+54h] [ebp-54h]
  _BYTE v10[44]; // [esp+58h] [ebp-50h] BYREF
  int v11; // [esp+84h] [ebp-24h]
  float v12; // [esp+8Ch] [ebp-1Ch]
  int v13; // [esp+98h] [ebp-10h]

  if ( !*((_BYTE *)this + 1713) )
    return Warning("GibLeftLeg Called on non-gibable NPC, ignoring the input \n");
  sub_10247EC0(v10);
  v4 = (double)this[55];
  v13 = 0;
  v12 = v4 + v12;
  v5 = sub_10261B20();
  if ( v5 )
    v11 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5);
  else
    v11 = -1;
  v6 = *(int (__thiscall **)(int *, _BYTE *, float *, char *))(*this + 248);
  v9 = 0;
  v8 = 6;
  return v6(this, v10, &flt_106F1CA8, v7);
}
