#ifndef LocalOtsuBinarizerImpl_h__
#define LocalOtsuBinarizerImpl_h__

#include <opencv2/core/core.hpp>

namespace prl
{

/*!
 * \brief Implementation of local Otsu binarization algorithm.
 * \param inputImageMat Image for binarization.
 * \param outputImageMat Resulting image.
 * \param maxValue New value for pixel which intensity greater than threshold value.
 * \param CLAHEClipLimit Parameter for CLAHE procedure.
 * \param GaussianBlurKernelSize Parameter for Gaussian blur procedure.
 * \param CannyUpperThresholdCoeff Coefficient for upper threshold of Canny edge detector.
 * \param CannyLowerThresholdCoeff Coefficient for lower threshold of Canny edge detector.
 * \param CannyMorphIters Parameter of morphology operations.
 * \details This function consists of next steps:
 * -# Histogram enchanting by CLAHE.
 * -# Edges detection by Canny.
 * -# Morphology operations.
 * -# Contours detection.
 * -# Binarization by Otsu of bounding rectangle of each contour.
 */
void binarizeLocalOtsu(
		cv::Mat& inputImageMat, cv::Mat& outputImageMat,
		double maxValue = 255.0,
		double CLAHEClipLimit = 0.0,
		int GaussianBlurKernelSize = 19,
		double CannyUpperThresholdCoeff = 0.15,
		double CannyLowerThresholdCoeff = 0.01,
		int CannyMorphIters = 1);

}

#endif // LocalOtsuBinarizerImpl_h__
