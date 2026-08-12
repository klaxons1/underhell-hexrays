void __thiscall sub_101A4460(int this, int a2)
{
  int (__thiscall *v3)(int); // edx
  float *v4; // eax

  sub_1002B830(this, a2);
  if ( !a2 )
  {
    v3 = *(int (__thiscall **)(int))(*(_DWORD *)(this - 8) + 36);
    *(_BYTE *)(this + 3356) = 0;
    v4 = (float *)v3(this - 8);
    *(float *)(this + 3344) = *v4;
    *(float *)(this + 3348) = v4[1];
    *(float *)(this + 3352) = v4[2];
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)(this - 8) + 408))(this - 8, -1293.0);
  }
}
