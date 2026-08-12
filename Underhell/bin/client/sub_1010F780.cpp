_DWORD *__thiscall sub_1010F780(_DWORD *this)
{
  _DWORD *result; // eax

  result = this;
  *this = &CRagdoll::`vftable';
  this[1] = 0;
  *((float *)this + 189) = 0.0;
  *((float *)this + 190) = 0.0;
  *((float *)this + 191) = 0.0;
  *((float *)this + 192) = -1.0;
  return result;
}
