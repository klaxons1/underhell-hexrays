int __stdcall sub_1010D620(int *a1, int a2)
{
  int *v2; // ebx
  int v3; // esi
  void (__thiscall *v4)(int, int **, int); // edx
  int v5; // edi
  int result; // eax
  float v7[3]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = a1;
  v3 = a2;
  v4 = *(void (__thiscall **)(int, int **, int))(*(_DWORD *)a2 + 52);
  v5 = *a1;
  a1 = *(int **)(*a1 + 16);
  v4(a2, &a1, 1);
  result = *(_DWORD *)(v5 + 16);
  switch ( result )
  {
    case 0:
      return result;
    case 1:
      result = (*(int (__thiscall **)(int, _DWORD, int, _DWORD, void *, int))(*(_DWORD *)v3 + 24))(
                 v3,
                 *(_DWORD *)(v2[2] + 4),
                 v5,
                 0,
                 &unk_10614ACC,
                 1);
      break;
    case 2:
      result = (*(int (__thiscall **)(int, _DWORD, int, _DWORD, void *, int))(*(_DWORD *)v3 + 24))(
                 v3,
                 *(_DWORD *)(v2[2] + 4),
                 v5,
                 0,
                 &unk_10614B34,
                 1);
      break;
    case 3:
      sub_1010C420((float *)v5, v7);
      result = (*(int (__thiscall **)(int, _DWORD, float *, _DWORD, void *, int))(*(_DWORD *)v3 + 24))(
                 v3,
                 *(_DWORD *)(v2[2] + 4),
                 v7,
                 0,
                 &unk_10614B9C,
                 1);
      break;
    case 5:
      result = (*(int (__thiscall **)(int, _DWORD, int, _DWORD, void *, int))(*(_DWORD *)v3 + 24))(
                 v3,
                 *(_DWORD *)(v2[2] + 4),
                 v5,
                 0,
                 &unk_10614A98,
                 1);
      break;
    case 6:
      result = (*(int (__thiscall **)(int, _DWORD, int, _DWORD, void *, int))(*(_DWORD *)v3 + 24))(
                 v3,
                 *(_DWORD *)(v2[2] + 4),
                 v5,
                 0,
                 &unk_10614A64,
                 1);
      break;
    case 9:
      result = (*(int (__thiscall **)(int, _DWORD, int, _DWORD, void *, int))(*(_DWORD *)v3 + 24))(
                 v3,
                 *(_DWORD *)(v2[2] + 4),
                 v5,
                 0,
                 &unk_10614B68,
                 1);
      break;
    case 13:
      result = (*(int (__thiscall **)(int, _DWORD, int, _DWORD, void *, int))(*(_DWORD *)v3 + 24))(
                 v3,
                 *(_DWORD *)(v2[2] + 4),
                 v5,
                 0,
                 &unk_10614B00,
                 1);
      break;
    case 15:
      sub_1010C420((float *)v5, v7);
      result = (*(int (__thiscall **)(int, _DWORD, float *, _DWORD, void *, int))(*(_DWORD *)v3 + 24))(
                 v3,
                 *(_DWORD *)(v2[2] + 4),
                 v7,
                 0,
                 &unk_10614BD0,
                 1);
      break;
    default:
      result = Warning("Bad type %d in saved variant_t\n", *(_DWORD *)(v5 + 16));
      break;
  }
  return result;
}
