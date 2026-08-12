float *__thiscall sub_101519F0(int this, float *a2, float *a3)
{
  float *v3; // ebx
  float *v4; // edi

  v3 = (float *)(this + 1232);
  if ( *(float *)(this + 1232) > (double)*a2 )
    *v3 = *a2;
  v4 = (float *)(this + 1244);
  if ( *(float *)(this + 1244) < (double)*a3 )
    *v4 = *a3;
  if ( *(float *)(this + 1236) > (double)a2[1] )
    *(float *)(this + 1236) = a2[1];
  if ( *(float *)(this + 1248) < (double)a3[1] )
    *(float *)(this + 1248) = a3[1];
  if ( *(float *)(this + 1240) > (double)a2[2] )
    *(float *)(this + 1240) = a2[2];
  if ( *(float *)(this + 1252) < (double)a3[2] )
    *(float *)(this + 1252) = a3[2];
  return sub_100EC3F0(*(_DWORD *)(this + 1212) + 8, v3, v4, 1);
}
