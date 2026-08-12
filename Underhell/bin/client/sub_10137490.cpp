int __stdcall sub_10137490(int a1, int a2)
{
  int result; // eax
  double v3; // st7
  int v4; // edi
  double v5; // st7
  double v6; // st6
  float v7; // [esp+8h] [ebp-Ch]
  float v8; // [esp+8h] [ebp-Ch]

  result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413178 + 4))(dword_10413178, *(_DWORD *)(a2 + 44));
  if ( result )
  {
    *(_DWORD *)(a1 + 48) = *(int *)a2 < 0 ? 0 : *(_DWORD *)a2;
    *(_DWORD *)(a1 + 336) = *(_DWORD *)(a2 + 44);
    *(_DWORD *)(a1 + 340) = *(_DWORD *)(a2 + 52);
    *(float *)(a1 + 344) = *(float *)(a2 + 60);
    *(float *)(a1 + 248) = 0.0;
    *(float *)(a1 + 244) = 0.0;
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 32))(dword_10413178, result);
    *(_DWORD *)(a1 + 348) = result;
    *(float *)(a1 + 196) = *((float *)off_103DC81C + 3) * *(float *)(a2 + 88);
    *(float *)(a1 + 200) = *((float *)off_103DC81C + 3) + *(float *)(a2 + 64);
    *(float *)(a1 + 204) = *(float *)(a2 + 68);
    *(float *)(a1 + 208) = *(float *)(a2 + 72);
    *(float *)(a1 + 212) = *(float *)(a2 + 76);
    *(float *)(a1 + 216) = *(float *)(a2 + 80);
    *(float *)(a1 + 236) = *(float *)(a2 + 84);
    *(float *)(a1 + 240) = *(float *)(a2 + 88);
    v3 = *(float *)(a2 + 64);
    *(_DWORD *)(a1 + 52) = 0;
    *(float *)(a1 + 220) = v3;
    *(float *)(a1 + 60) = *(float *)(a2 + 20);
    *(float *)(a1 + 64) = *(float *)(a2 + 24);
    *(float *)(a1 + 68) = *(float *)(a2 + 28);
    *(float *)(a1 + 72) = *(float *)(a2 + 32);
    *(float *)(a1 + 76) = *(float *)(a2 + 36);
    *(float *)(a1 + 80) = *(float *)(a2 + 40);
    *(float *)(a1 + 180) = *(float *)(a2 + 32) - *(float *)(a2 + 20);
    *(float *)(a1 + 184) = *(float *)(a2 + 36) - *(float *)(a2 + 24);
    *(float *)(a1 + 188) = *(float *)(a2 + 40) - *(float *)(a2 + 28);
    v4 = *(_DWORD *)(a2 + 116);
    if ( v4 == -1 )
    {
      v5 = *(float *)(a1 + 184);
      v6 = *(float *)(a1 + 180);
      if ( *(float *)(a1 + 216) < 0.5 )
      {
        v8 = *(float *)(a1 + 188) * *(float *)(a1 + 188) + v6 * v6 + v5 * v5;
        result = (int)(off_103EDFE0(v8) * 0.075 + 3.0);
      }
      else
      {
        v7 = v5 * v5 + v6 * v6 + *(float *)(a1 + 188) * *(float *)(a1 + 188);
        result = (int)(off_103EDFE0(v7) * 0.25 + 3.0);
      }
      *(_DWORD *)(a1 + 252) = result;
    }
    else
    {
      *(_DWORD *)(a1 + 252) = v4;
    }
  }
  return result;
}
