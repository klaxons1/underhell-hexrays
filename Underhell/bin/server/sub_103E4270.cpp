int __usercall sub_103E4270@<eax>(int a1@<ecx>, int a2@<edi>)
{
  const char *v3; // eax
  int v4; // edx
  _BYTE *v5; // edi
  int v6; // edi
  _DWORD *v7; // eax
  int v8; // ebx
  _BYTE v10[4]; // [esp+24h] [ebp-4h] BYREF

  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 100))(a1);
  v3 = *(const char **)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 28))(a1, v10);
  if ( !v3 )
    v3 = String;
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)a1 + 104))(a1, v3);
  sub_100EBE30(a1, 7);
  sub_1020CF10(a1, a2);
  sub_10112C00(a1 + 320, 2);
  sub_101129A0((unsigned __int16 *)(a1 + 320), *(_WORD *)(a1 + 356) | 4);
  sub_100E0970(a1, v4, 8, 0);
  v5 = (_BYTE *)(a1 + 225);
  if ( *(_BYTE *)(a1 + 225) != 1 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 480))(a1, a1 + 225);
    *v5 = 1;
    if ( *v5 != 1 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 480))(a1, a1 + 225);
      *v5 = 1;
    }
  }
  *(float *)(a1 + 1200) = 0.0;
  *(float *)(a1 + 1208) = 0.0;
  *(float *)(a1 + 1240) = 0.0;
  *(float *)(a1 + 1256) = *(float *)(dword_106B31C8 + 12);
  *(float *)(a1 + 1216) = 0.02;
  *(float *)(a1 + 1220) = 2.4000001;
  *(float *)(a1 + 1224) = 0.012;
  *(float *)(a1 + 1228) = 0.039999999;
  *(float *)(a1 + 1232) = 0.40000001;
  *(float *)(a1 + 1236) = 1.0;
  v6 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(a1 + 1100) && sub_100D7240((void *)a1) )
    sub_100BD750((volatile signed __int32 *)a1);
  v7 = *(_DWORD **)(a1 + 1100);
  if ( v7 && *v7 )
    v8 = *(_DWORD *)(a1 + 1100);
  else
    v8 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 104))(v6);
  sub_100C1460((_DWORD *)a1, v8, "armextensionpose", 0.0);
  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 584))(a1);
  return sub_100EC4A0((int *)a1, *(float *)(dword_106B31C8 + 12), 0);
}
