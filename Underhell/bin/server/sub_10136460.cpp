void __usercall sub_10136460(unsigned int a1@<ecx>, int a2@<ebp>)
{
  float *v3; // eax
  float *v4; // eax
  float *v5; // [esp+0h] [ebp-E0h]
  float *v6; // [esp+10h] [ebp-D0h]
  float v7[20]; // [esp+24h] [ebp-BCh] BYREF
  float v8[19]; // [esp+74h] [ebp-6Ch] BYREF
  _DWORD *v9; // [esp+C0h] [ebp-20h]
  void **v10; // [esp+D0h] [ebp-10h] BYREF
  _DWORD v11[3]; // [esp+D4h] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+E0h] [ebp+0h]

  v11[0] = a2;
  v11[1] = retaddr;
  if ( *(float *)(a1 + 812) <= 0.0 || *(float *)(a1 + 808) + 0.1 > *(float *)(dword_106B31C8 + 12) )
  {
    sub_100F9B80(a1);
  }
  else
  {
    v5 = (float *)sub_100F9A90((_DWORD *)a1);
    v3 = (float *)sub_100F9650((_DWORD *)a1);
    sub_1002A5F0((int)v11, a1, v3, v5, 33570827, 0, 0, (int)v8);
    sub_100F9D30((float *)a1, (int)v8);
  }
  if ( *(_DWORD *)(a1 + 1016)
    && ((v6 = (float *)sub_100F9A90((_DWORD *)a1),
         v4 = (float *)sub_100F9650((_DWORD *)a1),
         sub_1001F180(v7, v4, v6),
         *(_DWORD *)(a1 + 1016) != 4)
      ? (v10 = &CTraceFilterPlayersNPCs::`vftable')
      : (v10 = &CTraceFilterPlayersNPCsPhysicsProps::`vftable'),
        ((*(void (__thiscall **)(int, float *, int, void ***, float *))(*(_DWORD *)dword_106B31F4 + 16))(
           dword_106B31F4,
           v7,
           1174421507,
           &v10,
           v8),
         1.0 != v8[11])
     && sub_10135DA0((_DWORD *)a1, v9)) )
  {
    sub_1010DD80((_DWORD *)(a1 + 1032), __SPAIR64__(a1, (unsigned int)v9), 0.0);
  }
  else
  {
    sub_100EC4A0((int *)a1, *(float *)(dword_106B31C8 + 12), 0);
  }
}
