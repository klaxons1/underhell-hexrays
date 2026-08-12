void __usercall sub_103F5770(int a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  int *v4; // ecx
  int *v5; // ecx
  void *v6; // edi
  int v7; // [esp+8h] [ebp-10h]
  int v8; // [esp+Ch] [ebp-Ch]
  float v9; // [esp+14h] [ebp-4h] BYREF

  if ( !*(_BYTE *)(a1 + 1404) )
  {
    if ( sub_100D1940((_DWORD *)a1) && *(_BYTE *)(sub_100D1940((_DWORD *)a1) + 447) == 3 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 944))(a1, 184);
      sub_100D2380((_DWORD *)a1, 0, 0.0);
      v9 = *(float *)(dword_106B31C8 + 12) + 0.5;
      sub_100D2D50((float *)(a1 + 1136), &v9);
    }
    else
    {
      *(_BYTE *)(a1 + 1404) = 1;
      v8 = a2;
      v7 = a3;
      *(float *)(a1 + 1400) = *(float *)(dword_106B31C8 + 12) + 0.5;
      if ( *(_DWORD *)(a1 + 1136) != *(_DWORD *)(a1 + 1400) )
      {
        if ( *(_BYTE *)(a1 + 84) )
        {
          *(_BYTE *)(a1 + 88) |= 1u;
        }
        else
        {
          v4 = *(int **)(a1 + 24);
          if ( v4 )
            sub_100194B0(v4, 1136);
        }
        *(float *)(a1 + 1136) = *(float *)(a1 + 1400);
      }
      if ( *(_DWORD *)(a1 + 1132) != *(_DWORD *)(a1 + 1136) )
      {
        if ( *(_BYTE *)(a1 + 84) )
        {
          *(_BYTE *)(a1 + 88) |= 1u;
        }
        else
        {
          v5 = *(int **)(a1 + 24);
          if ( v5 )
            sub_100194B0(v5, 1132);
        }
        *(float *)(a1 + 1132) = *(float *)(a1 + 1136);
      }
      v6 = (void *)sub_100D1940((_DWORD *)a1);
      if ( v6 && (*(unsigned __int8 (__thiscall **)(void *, int, int))(*(_DWORD *)v6 + 320))(v6, v7, a2) )
        sub_101E3110(v6, 7u, 0, 4u);
      else
        v6 = 0;
      (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)a1 + 944))(a1, 175, v7, v8);
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 1132))(a1, 12, 0.0);
      ++*(_DWORD *)(a1 + 1376);
      (*(void (__thiscall **)(int, void *))(*(_DWORD *)off_10627F88 + 116))(off_10627F88, v6);
    }
  }
}
