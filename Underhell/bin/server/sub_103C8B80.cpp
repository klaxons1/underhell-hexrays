bool __usercall sub_103C8B80@<al>(int *a1@<ecx>, float a2@<ebp>)
{
  int v3; // esi
  float *v4; // eax
  float v6[20]; // [esp+24h] [ebp-DCh] BYREF
  _BYTE v7[12]; // [esp+74h] [ebp-8Ch] BYREF
  float v8[10]; // [esp+80h] [ebp-80h] BYREF
  char v9; // [esp+AAh] [ebp-56h]
  char v10; // [esp+ABh] [ebp-55h]
  int v11; // [esp+CCh] [ebp-34h] BYREF
  _DWORD v12[4]; // [esp+D8h] [ebp-28h] BYREF
  float v13[6]; // [esp+E8h] [ebp-18h] BYREF
  float retaddr; // [esp+100h] [ebp+0h]

  v13[3] = a2;
  v13[4] = retaddr;
  if ( *(int *)(dword_106B31C8 + 20) > 1 )
    return 0;
  v3 = sub_10261B20();
  if ( !v3 )
    return 0;
  sub_100BCCA0(a1, a1[1460], (int)v13, (int)&v11);
  sub_10265720(v12, (int)a1, v3, 0);
  v4 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 576))(v3);
  sub_1001F180(v6, v13, v4);
  (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v6,
    1174421507,
    v12,
    v7);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v7, (int)v8, 255, 0, 0, 1, -1.0);
  return v8[8] >= 1.0 && !v10 && !v9;
}
