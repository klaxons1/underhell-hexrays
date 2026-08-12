void __thiscall sub_101C7E80(_BYTE *this, float *a2, float *a3)
{
  switch ( this[307] )
  {
    case 0:
    case 3:
      sub_101C7B80((int)this, a2, a3);
      break;
    case 1:
      sub_101C7890((int)this, a2, a3, 0.0);
      break;
    case 2:
      (*(void (__thiscall **)(_BYTE *, float *, float *))(*(_DWORD *)this + 640))(this, a2, a3);
      break;
    default:
      return;
  }
}
