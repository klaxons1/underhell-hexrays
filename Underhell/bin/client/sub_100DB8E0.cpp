void __thiscall sub_100DB8E0(_DWORD **this, int a2)
{
  int v3; // esi
  float v4; // [esp+0h] [ebp-18h]
  float v5; // [esp+14h] [ebp-4h]

  if ( this[1] )
  {
    v3 = sub_101422C0();
    v5 = *(float *)((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 36))(a2) + 8) - *(float *)(v3 + 8);
    off_103EDFEC();
    v4 = 1.0 - fabs(v5);
    (*(void (__stdcall **)(_DWORD))(*this[1] + 12))(LODWORD(v4));
  }
}
