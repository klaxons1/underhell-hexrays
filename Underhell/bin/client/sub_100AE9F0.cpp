int __thiscall sub_100AE9F0(_DWORD *this)
{
  _DWORD *v2; // esi
  int v3; // eax
  _DWORD *v4; // esi
  _DWORD *v5; // eax
  int CPUInformation; // edi
  int v7; // edi
  int v8; // eax
  int v9; // eax
  int v10; // edi
  char *v11; // eax
  int v12; // eax
  float v14; // [esp+0h] [ebp-338h]
  char Buffer[256]; // [esp+10h] [ebp-328h] BYREF
  _BYTE Src[512]; // [esp+110h] [ebp-228h] BYREF
  int v17; // [esp+310h] [ebp-28h]
  int v18; // [esp+314h] [ebp-24h]
  char ArgList[4]; // [esp+328h] [ebp-10h]
  int v20; // [esp+32Ch] [ebp-Ch]
  int v21; // [esp+330h] [ebp-8h] BYREF
  int v22; // [esp+334h] [ebp-4h] BYREF

  v2 = (_DWORD *)this[648];
  if ( v2 )
  {
    if ( *v2 )
    {
      sub_1022AF00(*v2);
      *v2 = 0;
    }
    sub_10034930((int)v2);
    this[648] = 0;
  }
  v3 = sub_100DDA40(8);
  v4 = (_DWORD *)v3;
  if ( v3 )
  {
    *(_DWORD *)v3 = 0;
    *(_BYTE *)(v3 + 4) = 0;
    if ( sub_10229D00(32) )
      *v4 = sub_10229D20("gamestats");
    else
      *v4 = 0;
    v5 = v4;
  }
  else
  {
    v5 = 0;
  }
  this[648] = v5;
  sub_1022ACA0("version", 1);
  sub_1022ABA0("srcid", &::Src);
  CPUInformation = GetCPUInformation();
  sub_100AE4D0(*(_BYTE **)(CPUInformation + 16));
  sub_1022ABA0("CPUID", *(void **)(CPUInformation + 16));
  v14 = (double)*(__int64 *)(CPUInformation + 8) * 0.000000001;
  sub_1022ACC0("CPUGhz", v14);
  sub_1022ACA0("NumCores", *(unsigned __int8 *)(CPUInformation + 6));
  v7 = *(_DWORD *)dword_1047C96C;
  v8 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)dword_1047C96C + 76))(dword_1047C96C, Src);
  (*(void (__thiscall **)(int, int))(v7 + 80))(dword_1047C96C, v8);
  v9 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  v10 = v9;
  if ( v9 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 8))(v9);
  (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)v10 + 32))(v10, &v21, &v22);
  sub_100AE4D0(Src);
  sub_1022ABA0("GPUDrv", Src);
  sub_1022ACA0("GPUVendor", v17);
  sub_1022ACA0("GPUDeviceID", v18);
  v11 = sub_100010E0(Buffer, "%d.%d", *(_DWORD *)ArgList, v20);
  sub_1022ABA0("GPUDriverVersion", v11);
  v12 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C97C + 124))(dword_1047C97C);
  sub_1022ACA0("DxLvl", v12);
  sub_1022ACA0("Width", v21);
  sub_1022ACA0("Height", v22);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1041315C + 472))(dword_1041315C, this[648]);
  (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 12))(v10);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 4))(v10);
}
