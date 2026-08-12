int __thiscall sub_100BE800(float *this)
{
  int result; // eax
  int v3; // [esp+Eh] [ebp-6h]

  result = sub_100422D0();
  *((_DWORD *)this + 53) = result;
  if ( result )
  {
    (*(void (__thiscall **)(float *, int))(*(_DWORD *)this + 124))(this, 1);
    (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)this + 260))(this, 0);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 128))(dword_1047CA6C, *((_DWORD *)this + 52));
    LOWORD(v3) = 255;
    BYTE2(v3) = 0;
    HIBYTE(v3) = (int)((double)*(int *)(*((_DWORD *)this + 53) + 3436) * 2.55);
    (*(void (__stdcall **)(int))(*(_DWORD *)dword_1047CA6C + 40))(v3);
    result = (*(int (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 136))(
               dword_1047CA6C,
               (int)this[56],
               (int)this[58],
               (int)this[62],
               (int)this[60]);
    this[54] = *(float *)(*((_DWORD *)this + 53) + 3436);
  }
  return result;
}
