int __userpurge sub_10149D60@<eax>(int *a1@<ecx>, int a2@<edi>, int a3@<esi>, const void *a4)
{
  int result; // eax
  int v5; // ebx
  int v6; // esi
  int *v7; // edi
  int v8; // eax
  int v9; // ebx
  int v10; // edx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // ebx
  int v15; // edx
  int (__thiscall *v16)(int *); // eax
  int v17; // edi
  int v18; // eax
  void (__thiscall *v19)(int, _DWORD *, int); // edx
  _DWORD *v20; // eax
  _DWORD *v21; // esi
  _DWORD v23[29]; // [esp+4h] [ebp-94h] BYREF
  float v24[3]; // [esp+78h] [ebp-20h] BYREF
  float v25[3]; // [esp+84h] [ebp-14h] BYREF
  unsigned int v26; // [esp+90h] [ebp-8h] BYREF
  int *v27; // [esp+94h] [ebp-4h] BYREF

  v27 = a1;
  result = sub_100422D0();
  v5 = result;
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 788))(result);
    if ( result )
    {
      result = sub_10045780((_DWORD *)v5, 0);
      if ( result )
      {
        qmemcpy(v23, a4, sizeof(v23));
        result = sub_101162E0();
        v6 = result;
        if ( result )
        {
          if ( !(*(unsigned __int8 (__thiscall **)(int, int, int))(*(_DWORD *)result + 84))(result, a2, a3) )
            Msg(" not a render target");
          if ( !*(_BYTE *)(v5 + 4140) )
          {
            v7 = (int *)(sub_10045780((_DWORD *)v5, 0) + 4);
            v8 = sub_10045780((_DWORD *)v5, 0);
            v9 = *(_DWORD *)(v8 + 4);
            v10 = *v7;
            a4 = (const void *)(v8 + 4);
            v11 = (*(int (__thiscall **)(int *, const char *, float *, float *))(v10 + 140))(v7, "Scope", v25, v24);
            (*(void (__thiscall **)(const void *, int))(v9 + 148))(a4, v11);
            *(float *)&v23[11] = v25[0];
            *(float *)&v23[12] = v25[1];
            *(float *)&v23[13] = v25[2];
            *(float *)&v23[14] = v24[0];
            *(float *)&v23[15] = v24[1];
            *(float *)&v23[16] = v24[2];
          }
          v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 12))(v6);
          v13 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v6 + 16))(v6, v12);
          v14 = (int)v27;
          v15 = *v27;
          v23[3] = v13;
          v23[0] = 0;
          v23[1] = 0;
          v16 = *(int (__thiscall **)(int *))(v15 + 40);
          *(float *)&v23[9] = *(float *)(dword_1043BDFC + 44);
          LOBYTE(v23[4]) = 0;
          *(float *)&v23[22] = 1.0;
          v17 = *(_DWORD *)dword_10413168;
          v18 = v16(v27);
          v19 = *(void (__thiscall **)(int, _DWORD *, int))(v17 + 152);
          v23[1] = v18;
          v23[0] = v6;
          v19(dword_10413168, v23, 3);
          v27 = 0;
          v26 = 0;
          v20 = (_DWORD *)sub_100DDA40(160);
          if ( v20 )
            v21 = sub_10144170(v20, v14);
          else
            v21 = 0;
          a4 = v21;
          if ( sub_10146990(v21, v23, &v26, (int *)&v27) )
            (**(void (__thiscall ***)(int, _DWORD *))(v14 + 556))(v14 + 556, v21);
          sub_10143360((volatile signed __int32 **)&a4);
          sub_10149780((_DWORD *)v14, 0, 1, (int)v23, 2, 2, 0, 0, 0);
          return (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413168 + 160))(dword_10413168, v14 + 456);
        }
      }
    }
  }
  return result;
}
