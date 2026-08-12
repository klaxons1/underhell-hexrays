int __stdcall sub_1010D780(int *a1, int a2)
{
  int v2; // esi
  int result; // eax
  double v4; // st7
  double v5; // st7
  int v6; // [esp+10h] [ebp-10h]
  float v7; // [esp+14h] [ebp-Ch] BYREF
  float v8; // [esp+18h] [ebp-8h]
  float v9; // [esp+1Ch] [ebp-4h]

  v2 = *a1;
  *(_DWORD *)v2 = 0;
  *(_DWORD *)(v2 + 4) = v6;
  *(float *)(v2 + 8) = v7;
  *(_DWORD *)(v2 + 12) = -1;
  *(_DWORD *)(v2 + 16) = 0;
  result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 56))(a2);
  *(_DWORD *)(v2 + 16) = result;
  switch ( result )
  {
    case 0:
      return result;
    case 1:
      result = (*(int (__thiscall **)(int, _DWORD, int, _DWORD, void *, int))(*(_DWORD *)a2 + 12))(
                 a2,
                 *(_DWORD *)(a1[2] + 4),
                 v2,
                 0,
                 &unk_10614ACC,
                 1);
      break;
    case 2:
      result = (*(int (__thiscall **)(int, _DWORD, int, _DWORD, void *, int))(*(_DWORD *)a2 + 12))(
                 a2,
                 *(_DWORD *)(a1[2] + 4),
                 v2,
                 0,
                 &unk_10614B34,
                 1);
      break;
    case 3:
      result = (*(int (__thiscall **)(int, _DWORD, float *, _DWORD, void *, int))(*(_DWORD *)a2 + 12))(
                 a2,
                 *(_DWORD *)(a1[2] + 4),
                 &v7,
                 0,
                 &unk_10614B9C,
                 1);
      *(float *)v2 = v7;
      v4 = v8;
      *(_DWORD *)(v2 + 16) = 3;
      *(float *)(v2 + 4) = v4;
      *(float *)(v2 + 8) = v9;
      break;
    case 5:
      result = (*(int (__thiscall **)(int, _DWORD, int, _DWORD, void *, int))(*(_DWORD *)a2 + 12))(
                 a2,
                 *(_DWORD *)(a1[2] + 4),
                 v2,
                 0,
                 &unk_10614A98,
                 1);
      break;
    case 6:
      result = (*(int (__thiscall **)(int, _DWORD, int, _DWORD, void *, int))(*(_DWORD *)a2 + 12))(
                 a2,
                 *(_DWORD *)(a1[2] + 4),
                 v2,
                 0,
                 &unk_10614A64,
                 1);
      break;
    case 9:
      result = (*(int (__thiscall **)(int, _DWORD, int, _DWORD, void *, int))(*(_DWORD *)a2 + 12))(
                 a2,
                 *(_DWORD *)(a1[2] + 4),
                 v2,
                 0,
                 &unk_10614B68,
                 1);
      break;
    case 13:
      result = (*(int (__thiscall **)(int, _DWORD, int, _DWORD, void *, int))(*(_DWORD *)a2 + 12))(
                 a2,
                 *(_DWORD *)(a1[2] + 4),
                 v2,
                 0,
                 &unk_10614B00,
                 1);
      break;
    case 15:
      result = (*(int (__thiscall **)(int, _DWORD, float *, _DWORD, void *, int))(*(_DWORD *)a2 + 12))(
                 a2,
                 *(_DWORD *)(a1[2] + 4),
                 &v7,
                 0,
                 &unk_10614BD0,
                 1);
      *(float *)v2 = v7;
      v5 = v8;
      *(_DWORD *)(v2 + 16) = 15;
      *(float *)(v2 + 4) = v5;
      *(float *)(v2 + 8) = v9;
      break;
    default:
      result = Warning("Bad type %d in saved variant_t\n", result);
      break;
  }
  return result;
}
