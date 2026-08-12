char __fastcall sub_10329530(int a1, int a2, _DWORD *a3)
{
  char result; // al
  float *v5; // eax
  float v6; // ecx
  float v7; // edx
  float v8; // eax
  double v9; // st7
  double v10; // st6
  double v11; // st5
  double v12; // st7
  double v13; // st7
  float v14[3]; // [esp+30h] [ebp-18h] BYREF
  float v15; // [esp+3Ch] [ebp-Ch]
  float v16; // [esp+40h] [ebp-8h]
  float v17; // [esp+44h] [ebp-4h]

  switch ( *a3 )
  {
    case 0x96:
      *(_DWORD *)(a1 + 3764) = 1;
      result = sub_10027CD0((_DWORD *)a1, 0);
      break;
    case 0x97:
      *(_DWORD *)(a1 + 3764) = 3;
      result = sub_10027CD0((_DWORD *)a1, 0);
      break;
    case 0x98:
      *(_DWORD *)(a1 + 3764) = 5;
      result = sub_10027CD0((_DWORD *)a1, 0);
      break;
    case 0x99:
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1) )
      {
        v5 = (float *)sub_100217F0((void *)a1);
        v6 = *v5;
        v7 = v5[1];
        v8 = v5[2];
        v15 = v6;
        v9 = v6 - *(float *)(a1 + 716);
        v16 = v7;
        v17 = v8;
        v10 = v7 - *(float *)(a1 + 720);
        v11 = v9;
        v12 = v8 - *(float *)(a1 + 724);
      }
      else
      {
        (*(void (__thiscall **)(int, float *, _DWORD, _DWORD))(*(_DWORD *)a1 + 528))(a1, v14, 0, 0);
        v15 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                dword_106B31E4,
                -10.0,
                10.0);
        v16 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                dword_106B31E4,
                -10.0,
                10.0);
        v13 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                dword_106B31E4,
                -20.0,
                -10.0);
        v12 = v13 + v14[2];
        v11 = v14[0] + v15;
        v10 = v14[1] + v16;
      }
      *(float *)(a1 + 3804) = v11;
      *(float *)(a1 + 3808) = v10;
      *(float *)(a1 + 3812) = v12;
      off_10689714();
      *(float *)(a1 + 3816) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                dword_106B31E4,
                                20.0,
                                420.0);
      if ( (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 1) )
        *(float *)(a1 + 3816) = *(float *)(a1 + 3816) * -1.0;
      sub_10328E60(a1);
      *(_DWORD *)(a1 + 3764) = 6;
      result = sub_10027CD0((_DWORD *)a1, 0);
      break;
    default:
      result = sub_100432F0((_DWORD *)a1, a2, (int)a3);
      break;
  }
  return result;
}
