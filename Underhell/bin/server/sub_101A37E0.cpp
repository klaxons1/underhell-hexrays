void __thiscall sub_101A37E0(int this, _DWORD *a2)
{
  unsigned int v3; // eax

  switch ( *a2 )
  {
    case 0x4C:
      *(float *)(this + 2740) = *(float *)(dword_106B31C8 + 12);
      sub_10043E90((int *)this, 281);
      break;
    case 0xFA:
      (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1416))(this, 332);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 2604) + 48))(*(_DWORD *)(this + 2604));
      if ( sub_101A2970((float *)this) )
      {
        *(float *)(this + 3888) = *(float *)(dword_106B31C8 + 12) + 2.0;
        sub_10027CD0((_DWORD *)this, 0);
        *(float *)(this + 3988) = 1.0;
      }
      *(_BYTE *)(this + 3900) = 0;
      break;
    case 0x103:
      *(float *)(this + 3892) = 0.0;
      sub_101A36E0((char *)this, 0, COERCE_INT(1200.0));
      v3 = *(_DWORD *)(this + 3944);
      if ( v3 != -1
        && off_1061BE18[4 * (*(_DWORD *)(this + 3944) & 0xFFF) + 2] == v3 >> 12
        && off_1061BE18[4 * (*(_DWORD *)(this + 3944) & 0xFFF) + 1] )
      {
        sub_10027CD0((_DWORD *)this, 0);
      }
      else
      {
        (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 1312))(this, "Failed to find a physobject.\n");
      }
      break;
    default:
      sub_10332690(this, (char)a2);
      break;
  }
}
