void __thiscall sub_1010EA90(int this, int a2)
{
  char v3; // al

  sub_1002F9F0(this, a2);
  (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)(this + 2528) + 16))(
    this + 2528,
    *((float *)off_103DC81C + 3),
    1);
  (*(void (__stdcall **)(_DWORD, int))(*(_DWORD *)(this + 2572) + 16))(*((float *)off_103DC81C + 3), 1);
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)(this + 2528) + 28))(this + 2528);
  *(float *)(this + 2732) = sub_10038610(this - 8, v3) + *((float *)off_103DC81C + 3);
}
