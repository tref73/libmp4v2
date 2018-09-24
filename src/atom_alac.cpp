#include "src/impl.h"

namespace mp4v2 {
namespace impl {

///////////////////////////////////////////////////////////////////////////////

MP4ALACAtom::MP4ALACAtom(MP4File &file) : MP4Atom(file, "alac")
{
	AddVersionAndFlags();
	AddProperty(
		new MP4BytesProperty(*this, "decoderConfig"));
}

void MP4ALACAtom::Generate()
{
	MP4Atom::Generate();
}

///////////////////////////////////////////////////////////////////////////////

}
} // namespace mp4v2::impl