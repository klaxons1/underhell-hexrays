int __thiscall sub_101B6270(int this, int a2, int a3, int a4, int a5, __int16 a6, float a7, int a8)
{
  int result; // eax
  float v10; // [esp+Ch] [ebp-4h]
  int v11; // [esp+24h] [ebp+14h]

  v10 = a7 * 0.0039215689;
  result = sub_102385E0(a2, a3, a4, a5, a6, v10, 0);
  if ( a8 >= 0 )
  {
    v11 = *(_DWORD *)(this + 378);
    HIBYTE(v11) = (int)((double)HIBYTE(v11) * v10);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 72))(dword_1047CA6C, v11);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 68))(dword_1047CA6C, *(_DWORD *)(this + 264));
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 80))(
      dword_1047CA6C,
      (int)((double)a2 + *(float *)(this + 336)),
      (int)((double)a3 + *(float *)(this + 344)));
    return (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 92))(dword_1047CA6C, a8 + 48, 0);
  }
  return result;
}
