// bad sp value at call has been detected, the output may be wrong!
bool __userpurge sub_103DB2C0@<al>(float *a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>, char *a5)
{
  float *v6; // eax
  int (__thiscall *v7)(char *); // edx
  float *v8; // eax
  float v11[20]; // [esp+24h] [ebp-DCh] BYREF
  _BYTE v12[12]; // [esp+74h] [ebp-8Ch] BYREF
  int v13; // [esp+80h] [ebp-80h] BYREF
  float v14; // [esp+A0h] [ebp-60h]
  int v15; // [esp+C0h] [ebp-40h]
  float v16[3]; // [esp+D0h] [ebp-30h] BYREF
  float *v17; // [esp+DCh] [ebp-24h] BYREF
  int v18; // [esp+E0h] [ebp-20h]
  char *v19; // [esp+E4h] [ebp-1Ch]
  int v20; // [esp+E8h] [ebp-18h] BYREF
  _BYTE *v21; // [esp+ECh] [ebp-14h]
  _DWORD v22[3]; // [esp+F4h] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+100h] [ebp+0h]

  v22[0] = a2;
  v22[1] = retaddr;
  sub_103D9CD0((int)a1, (int)v16, a5);
  v6 = sub_103D9500(a1, (float *)&v17);
  sub_1001F180(v11, v6, v16);
  sub_10265570(&v20, (int)a5, 0);
  (*(void (__thiscall **)(int, float *, int, int *, _BYTE *, int, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v11,
    1174421507,
    &v20,
    v12,
    a3,
    a4);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v12, (int)&v13, 255, 0, 0, 1, 5.0);
  if ( 1.0 == v14 )
    return 1;
  if ( (*(unsigned __int8 (__thiscall **)(char *))(*(_DWORD *)a5 + 320))(a5) )
  {
    v7 = *(int (__thiscall **)(char *))(*(_DWORD *)a5 + 504);
    v21 = v12;
    v20 = 0;
    v19 = a5;
    v18 = 1174421507;
    v17 = (float *)&v17;
    v17 = (float *)v7(a5);
    v8 = sub_103D9500(a1, (float *)&v20);
    sub_1002A5F0((int)v22, (int)a5, v8, v17, v18, (int)v19, v20, (int)v21);
    if ( 1.0 == v14 )
      return 1;
  }
  return v15 && *(_BYTE *)(v15 + 225) == 2;
}
