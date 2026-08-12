void __cdecl sub_101B53A0(int a1, int a2)
{
  double v2; // st7
  _BYTE v3[12]; // [esp+18h] [ebp-18h] BYREF
  float v4[3]; // [esp+24h] [ebp-Ch] BYREF

  switch ( *(_WORD *)(a2 + 72) )
  {
    case 'C':
      v2 = 340.0;
      goto LABEL_4;
    case 'D':
    case 'N':
      v2 = 200.0;
LABEL_4:
      if ( v2 <= *(float *)(a1 + 24) )
      {
        (*(void (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(a1 + 28) + 4))(*(_DWORD *)(a1 + 28), v3);
        sub_1001EF40(v4, -1.0, 1.0);
        v4[2] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                  dword_106B31E4,
                  0.30000001,
                  1.0);
        off_10689714();
        ((void (__stdcall *)(_BYTE *, float *, _DWORD, _DWORD))(*off_1061B7A0)[4])(v3, v4, 8.0, *(float *)(a1 + 24));
      }
      break;
    case 'Z':
      sub_101B5320(a1);
      break;
    default:
      return;
  }
}
