// bad sp value at call has been detected, the output may be wrong!
bool __userpurge sub_103989D0@<al>(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>, int a5)
{
  float *v6; // edi
  float *v7; // eax
  void (__thiscall *v8)(int, float *, int); // eax
  float v11[20]; // [esp+28h] [ebp-CCh] BYREF
  _BYTE v12[12]; // [esp+78h] [ebp-7Ch] BYREF
  float v13[16]; // [esp+84h] [ebp-70h] BYREF
  int v14; // [esp+C4h] [ebp-30h]
  int v15; // [esp+D0h] [ebp-24h] BYREF
  _DWORD v16[6]; // [esp+DCh] [ebp-18h] BYREF
  _UNKNOWN *retaddr; // [esp+F4h] [ebp+0h]

  v16[3] = a2;
  v16[4] = retaddr;
  v6 = (float *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)a5 + 576))(a5, a3, a4);
  v7 = (float *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)a1 + 968))(a1, &v15);
  sub_1001F180(v11, v7, v6);
  sub_10265570(v16, a1, 0);
  v8 = *(void (__thiscall **)(int, float *, int))(*(_DWORD *)dword_106B31F4 + 16);
  v16[1] = v12;
  v16[0] = v16;
  v8(dword_106B31F4, v11, 1174421507);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v12, (int)v13, 255, 0, 0, 1, 5.0);
  return v13[8] >= 0.5
      && (!v14
       || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v14 + 284))(v14)
       && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v14 + 320))(v14));
}
