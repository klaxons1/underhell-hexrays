int __thiscall sub_101ADB40(int this)
{
  sub_100D1000((float *)this);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 128))(dword_1047CA6C, *(_DWORD *)(this + 468));
  (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 40))(dword_1047CA6C, -229630);
  return (*(int (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 136))(
           dword_1047CA6C,
           (int)*(float *)(this + 428),
           (int)*(float *)(this + 436),
           (int)*(float *)(this + 452),
           (int)*(float *)(this + 444));
}
